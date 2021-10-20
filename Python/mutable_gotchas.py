#/usr/bin/env python3

"""
Python does not behave as desired. It is about mutable and immutable variables.
"""


def append_cost(price, cost_list = []):
    """the function appends price to cost_list and writes list to console"""
    cost_list.append(price)
    print(cost_list)

def append_cost_correct(price, cost_list = None):
    """the function appends price to cost_list and writes list to console"""
    if cost_list is None:
        cost_list = []
    cost_list.append(price)
    print(cost_list)


def worstcase():
    """
    we want to see in console following,
      [10]
      [12]
    but it write following,
      [10]
      [10, 12] 
    """
    print("worstcase")
    append_cost(10)
    append_cost(12)

def bestcase():
    print("bestcase")
    append_cost_correct(10)
    append_cost_correct(12)


def usecase():
    print("usecase")
    cost_list = []
    append_cost(10, cost_list)
    append_cost(12, cost_list)


def main():
    usecase()
    worstcase()
    bestcase()


if __name__ == "__main__":
    main()
