# TODO
def count_letters(text):
    total_letters = sum(1 for char in text if char.isalpha())
    return total_letters


def count_words(text):
    total_words = len(text.split())
    return total_words


def count_sentences(text):
    sentence_endings = [".", "!", "?"]
    total_sentences = sum(1 for char in text if char in sentence_endings)
    return total_sentences


def main():
    text = input("Text: ")

    num_letters = count_letters(text)
    num_words = count_words(text)
    num_sentences = count_sentences(text)

    L = 100 * (num_letters / num_words)
    S = 100 * (num_sentences / num_words)

    index = round(0.0588 * L - 0.296 * S - 15.8)
    if index > 16:
        print("Grade 16+")
    elif index < 1:
        print("Before Grade 1")
    else:
        print(f"Grade {index}")


if __name__ == "__main__":
    main()
