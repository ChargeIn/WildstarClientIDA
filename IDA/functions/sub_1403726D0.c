//----- (00000001403726D0) ----------------------------------------------------
__int64 __usercall sub_1403726D0@<xmm0>(__int64 a1@<rcx>, unsigned int a2@<edx>)
{
__int64 v2; // rax
__int64 v5; // rcx
__int64 v6; // rcx
__int64 result; // xmm0_8
__int64 v8; // rcx
__int64 v9; // rax
__int64 v10; // rcx
__int64 v11; // xmm1_8

v2 = *(_QWORD*)(a1 + 16);
if (v2)
{
if (*(_QWORD*)(a1 + 8))
{
v5 = *(_QWORD*)(v2 + 40);
if (v5)
(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 112i64))(v5);
v6 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 40i64);
if (v6)
(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 112i64))(v6, a2);
return 1065353216i64;
}
else
{
v8 = *(_QWORD*)(v2 + 40);
if (v8)
(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 112i64))(v8);
HIDWORD(result) = 0;
*(float*)&result = fmaxf(0.0, fminf(1.0 - *(float*)(a1 + 24), 1.0));
}
}
else
{
v9 = *(_QWORD*)(a1 + 8);
if (v9)
{
v10 = *(_QWORD*)(v9 + 40);
if (v10)
(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 112i64))(v10);
HIDWORD(v11) = 0;
*(float*)&v11 = fmaxf(0.0, fminf(*(float*)(a1 + 24), 1.0));
return v11;
}
else
{
return 0i64;
}
}
return result;
}
// 140372747: conditional instruction was optimized away because rax.8!=0