import numpy as np


def mean_squared_error(y_pred: np.ndarray, y_test: np.ndarray) -> np.float64:
    """
    Returns the mean squared error of model.

    Parameters
    ----------
    y_pred : np.ndarray
        The model prediction array of shape (n_samples, ) or (1, n_samples)
    y_test : np.ndarray
        The testing array of shape (n_samples, ) or (1, n_samples)

    Returns
    -------
    np.float64
        The mean squared error of model
    """
    y_pred = y_pred.reshape(-1)
    y_test = y_test.reshape(-1)
    return np.sum((y_test - y_pred) ** 2) / len(y_test)


def mean_absolute_error(y_pred: np.ndarray, y_test: np.ndarray) -> np.float64:
    """
    Returns the mean absolute error of model.

    Parameters
    ----------
    y_pred : np.ndarray
        The model prediction array of shape (n_samples, ) or (1, n_samples)
    y_test : np.ndarray
        The testing array of shape (n_samples, ) or (1, n_samples)

    Returns
    -------
    np.float64
        The mean absolute error of model
    """
    y_pred = y_pred.reshape(-1)
    y_test = y_test.reshape(-1)
    return np.sum(np.abs(y_test - y_pred)) / len(y_test)


def r2_score(y_pred: np.ndarray, y_test: np.ndarray) -> np.float64:
    """
    Returns the r2 score of model.

    Parameters
    ----------
    y_pred : np.ndarray
        The model prediction array of shape (n_samples, ) or (1, n_samples)
    y_test : np.ndarray
        The testing array of shape (n_samples, ) or (1, n_samples)

    Returns
    -------
    np.float64
        The r2 score of model
    """
    y_pred = y_pred.reshape(-1)
    y_test = y_test.reshape(-1)
    mean = np.mean(y_test)
    return 1 - np.sum((y_test - y_pred) ** 2) / np.sum((y_test - mean) ** 2)
