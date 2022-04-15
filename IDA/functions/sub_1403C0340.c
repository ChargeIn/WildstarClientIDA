//----- (00000001403C0340) ----------------------------------------------------
__int64 __usercall sub_1403C0340@<xmm0>(__int64 a1@<rcx>, unsigned int a2@<edx>)
{
__int64 v2; // rsi
unsigned int v3; // edi
__int64 v4; // rbp
__int64 v5; // rdx
__int64 v6; // rax
__int64 v7; // rcx
__int64 result; // xmm0_8
float v9; // xmm1_4
float v10; // xmm6_4
__int64 v11; // rcx
__int64 v12; // [rsp+40h] [rbp+8h]

v2 = qword_140C65898;
v3 = a2;
if (!a2)
return 0i64;
if (!*(_QWORD*)(qword_140C65898 + 25744))
goto LABEL_6;
if (!qword_140C65898 || (v4 = sub_1405A5B90(qword_140C65898, a2)) == 0)
{
a2 = v3;
LABEL_6:
v4 = sub_1407A0FD0(qword_140C65B70, a2);
}
if (v4)
{
v5 = *(_QWORD*)(v2 + 5512);
v6 = *(_QWORD*)(v5 + 8);
v7 = v5;
while (v6)
{
if (*(_DWORD*)(v6 + 32) < v3)
{
v6 = *(_QWORD*)(v6 + 24);
}
else
{
v7 = v6;
v6 = *(_QWORD*)(v6 + 16);
}
}
if (v7 == v5 || (v12 = v7, v3 < *(_DWORD*)(v7 + 32)))
v12 = *(_QWORD*)(v2 + 5512);
if (v12 == v5)
return 0i64;
if (*(_DWORD*)(*(_QWORD*)(v12 + 40) + 8i64))
return 1065353216i64;
v9 = 0.0;
v10 = (float)(int)sub_1403C0210(v2, v3);
if (v10 == 0.0)
return 0i64;
if (*(_DWORD*)(*(_QWORD*)(v4 + 112) + 24i64) == 2 || *(_DWORD*)(*(_QWORD*)(v4 + 112) + 24i64) == 6)
{
v11 = *(_QWORD*)(v12 + 40) + 32i64;
}
else
{
if (*(_DWORD*)(*(_QWORD*)(v4 + 112) + 24i64) != 7)
{
LABEL_28:
HIDWORD(result) = 0;
*(float*)&result = (float)(v10 - v9) / v10;
return result;
}
v11 = *(_QWORD*)(v12 + 40) + 104i64;
}
v9 = (float)(int)sub_140195F70(v11);
goto LABEL_28;
}
return 0i64;
}
// 1403C0388: conditional instruction was optimized away because edx.4==1
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;