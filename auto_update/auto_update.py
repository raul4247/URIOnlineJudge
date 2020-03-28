from selenium import webdriver

PAGE_COUNT = 1

username = ''
password = ''


def main():
    driver = webdriver.Chrome('./chromedriver.exe')
    driver.get('https://www.urionlinejudge.com.br/judge/pt/login')

    username_input = driver.find_element_by_name('email')
    password_input = driver.find_element_by_name('password')
    enter_button = driver.find_element_by_class_name('send-green')

    username_input.send_keys(username)
    password_input.send_keys(password)
    enter_button.click()

    solutions = []

    for i in range(1, PAGE_COUNT+1):
        driver.get(
            'https://www.urionlinejudge.com.br/judge/pt/runs?page=' + str(i) + '&sort=created&direction=asc')
        page_list = driver.find_elements_by_tag_name('tr')
        for submission in page_list:
            data = submission.text
            if "Accepted" in data:
                idCode = str(data.split(" ")[0])
                id = str(data.split(" ")[1])
                url = 'https://www.urionlinejudge.com.br/judge/pt/runs/code/' + idCode
                solutions.append({'id': id, 'url': url})

    for solution in solutions:
        id = solution['id']
        url = solution['url']
        driver.get(url)
        code = driver.find_element_by_class_name('ace_content').text

        f = open('../src/' + id + '.cpp', "w+")
        f.write(code)
        f.close()


if __name__ == "__main__":
    main()
