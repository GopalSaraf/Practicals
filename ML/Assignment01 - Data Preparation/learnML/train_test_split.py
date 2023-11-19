import numpy as np
import pandas as pd
from typing import Tuple, Union


def _get_numpy_data(data: Union[pd.DataFrame, np.ndarray]) -> np.ndarray:
    """
    Convert the data to numpy array.

    Parameters
    ----------
    data : Union[pd.DataFrame, np.ndarray]
        The data to be converted

    Returns
    -------
    np.ndarray
        The data as numpy array

    Raises
    ------
    TypeError
        If the data is neither a pandas DataFrame nor a numpy array
    """
    if isinstance(data, pd.DataFrame):
        data = data.to_numpy()
    elif isinstance(data, np.ndarray):
        data = data
    else:
        raise TypeError("data must be either pandas DataFrame or numpy array")

    return data


def train_test_split(
    X: Union[pd.DataFrame, np.ndarray],
    Y: Union[pd.DataFrame, np.ndarray],
    test_size: float = 0.2,
    random_state: int = 0,
) -> Tuple[np.ndarray, np.ndarray, np.ndarray, np.ndarray]:
    """
    Split the data into training and testing sets.

    Parameters
    ----------
    X : np.ndarray or pd.DataFrame
        The input features of shape (n_samples, n_features)
    Y : np.ndarray or pd.DataFrame
        The output features of shape (n_samples, n_outputs)
    test_size : float, optional
        The size of the testing set, by default 0.2
    random_state : int, optional
        The random state, by default 0

    Returns
    -------
    tuple
        The training and testing sets
        X_train, X_test, Y_train, Y_test
    """
    assert test_size > 0 and test_size < 1, "test_size must be between 0 and 1"

    X = _get_numpy_data(X)
    Y = _get_numpy_data(Y)

    assert X.shape[0] == Y.shape[0], "X and Y must have the same number of samples"
    assert X.shape[0] > 0, "X must have at least one sample"
    assert Y.shape[0] > 0, "Y must have at least one sample"

    np.random.seed(random_state)

    if len(X.shape) == 1:
        X = X.reshape(X.shape[0], 1)

    if len(Y.shape) == 1:
        Y = Y.reshape(Y.shape[0], 1)

    m = X.shape[0]

    # Shuffle the indices of the data points
    indices = np.random.permutation(m)

    # Use the shuffled indices to rearrange X and Y
    X = X[indices, :]
    Y = Y[indices, :]

    # No of samples in the testing set
    testSize = int(m * test_size)

    # Testing set
    X_test = X[:testSize, :]
    Y_test = Y[:testSize, :]

    # Training set
    X_train = X[testSize:, :]
    Y_train = Y[testSize:, :]

    return X_train, X_test, Y_train, Y_test
