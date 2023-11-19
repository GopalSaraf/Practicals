import matplotlib.pyplot as plt


def createFigure(subtitle):
    # Create a figure with two subplots side by side
    fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(10, 4))
    fig.suptitle(subtitle)

    return ax1, ax2


def pltTrainSet(ax, x_train, y_train, y_pred):
    # Plot the Training set in the first subplot
    ax.scatter(x_train, y_train, color="red", label="Training set")
    ax.plot(x_train, y_pred, color="blue")
    ax.set_title("Training set")
    ax.set_xlabel("x_train")
    ax.set_ylabel("y_train")
    ax.legend()


def pltTestSet(ax, x_test, y_test, y_pred):
    # Plot the Test set in the second subplot
    ax.scatter(x_test, y_test, color="red", label="Test set")
    ax.plot(x_test, y_pred, color="blue")
    ax.set_title("Test set")
    ax.set_xlabel("x_test")
    ax.set_ylabel("y_test")
    ax.legend()


def plot(
    subtitle,
    x_train,
    y_train,
    x_test=None,
    y_test=None,
    x_train_pred=None,
    x_test_pred=None,
):
    ax1, ax2 = createFigure(subtitle)
    pltTrainSet(ax1, x_train, y_train, x_train_pred)

    if x_test is not None and y_test is not None:
        pltTestSet(ax2, x_test, y_test, x_test_pred)

    # Adjust spacing between subplots
    plt.tight_layout()

    # Show the plot
    plt.show()
