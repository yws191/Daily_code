import unittest
from selenium import webdriver
from selday2_3.UserFuns import login
from selday3_1.RegFun import regist
class RegLog(unittest.TestCase):
    def setUp(self):#打开网页
        self.driver = webdriver.Firefox()
        self.driver.get("http://192.168.0.111/ecshop")
    def tearDown(self):#关闭浏览器
        self.driver.quit()
    def testRegist(self):# 注册
        regist("zhangsan001",'zhangsan001@163.com','123456','123456','76543@163.com','765432345','45678856','765432','7654322',6,'aa',self.driver)
    def testlogin(self):#登录
        login("zhangsan001",'123456',self.driver)

#启动框架
if __name__ == '__main__':
    unittest.main()