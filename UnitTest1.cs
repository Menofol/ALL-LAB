using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace TestProject1
{
    [TestClass]
    public class UnitTest1
    {
        private const int V = 1352;

        [TestMethod]
        public void Product()
        {
            int a = V;

            int result = TestOne.Program.getProduct(a);
            Assert.AreEqual(30, result);
        }
        [TestMethod]
        public void Sum()
        {
            int a = V;

            int result = TestOne.Program.getSum(a);
            Assert.AreEqual(11, result);
        }
    }
}
