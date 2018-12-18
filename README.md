# lumin-rt-prism-sample
Lumin Runtime Prism Sample

---

## Building this app

0. Set env

```shell
source <path to your SDK dir>/MagicLeap/mlsdk/v0.18.0/envsetup.sh
```

1. Build

```shell
mabu project.package -t device -s <your certificate file>
```

2. Install

```shell
mldb install -u .out/project/project.mpk
```

3. Run

```shell
mldb launch com.leoz.prismsample
```

4. Uninstall

```shell
mldb uninstall com.leoz.prismsample
```

## License

All source code is MIT licensed, as found in the LICENSE file.

[Box Textured Model](https://github.com/KhronosGroup/glTF-Sample-Models/tree/master/2.0/BoxTextured) file is licensed under a [Creative Commons Attribution 4.0 International License](http://creativecommons.org/licenses/by/4.0/).