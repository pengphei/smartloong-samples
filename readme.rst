智龙示例程序
==============================

这里是一些用于基于龙芯1C主芯片的智龙开发板的开发示例程序。

构建方法
------------------------------

参考 `Buildroot环境使用 <https://github.com/pengphei/smartloong-sphinx/blob/master/source/cn/loongson1c_buildroot_guide.rst>`_ 将 *smartloong-samples* 放到与 *buildroot* 相同的目录下。然后执行如下程序进行构建：

.. code:: shell

   scons

在构建完成后，将会在 *out* 目录下生成所有的测试程序。使用 *tftp* 或者其他程序将该目录下的程序拷贝到智龙开发板，然后执行对应的测试程序即可。

