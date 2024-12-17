def binary_search(list: list, item) -> int:
    """
    Recebe uma lista ordenada e um elemento.
    Caso o elemento esteja na lista, retorna a posição dele, caso não esteja, retorna None.
    """

    start = 0
    end = len(list)

    while start <= end:

        mid = (start + end)//2
        attempt = list[mid]

        if attempt == item:
            return mid

        if mid < item:
            start = mid + 1
        else:
            end = mid - 1

    return None
