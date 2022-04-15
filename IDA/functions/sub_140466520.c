//----- (0000000140466520) ----------------------------------------------------
__int64 __usercall sub_140466520@<xmm0>(__int64 a1@<rcx>, int a2@<edx>)
{
__int64 result; // xmm0_8
__int64 v4; // rax
__int64 v5; // rbx
bool v6; // zf
__int64 v7; // rax
__int64 v8; // rax
__int64 v9; // rcx
int v10; // eax

switch (a2)
{
case 1:
HIDWORD(result) = 0;
*(float*)&result = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
return result;
case 2:
(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
return result;
case 3:
HIDWORD(result) = 0;
*(float*)&result = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1);
return result;
case 5:
return *(unsigned int*)(a1 + 540);
case 6:
return *(unsigned int*)(a1 + 544);
case 7:
return *(unsigned int*)(a1 + 548);
case 8:
return *(unsigned int*)(a1 + 552);
case 9:
return *(unsigned int*)(a1 + 556);
case 10:
return *(unsigned int*)(a1 + 560);
case 11:
return *(unsigned int*)(a1 + 564);
case 15:
return *(unsigned int*)(a1 + 536);
case 16:
return *(unsigned int*)(a1 + 568);
case 20:
return COERCE_UNSIGNED_INT((float)*(int*)(a1 + 1200));
case 21:
HIDWORD(result) = 0;
*(float*)&result = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a1 + 136i64))(a1);
return result;
case 22:
v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
        qword_140C65980,
        *(unsigned int*)(qword_140C65980 + 56),
        0i64);
v5 = v4;
if (!v4)
goto LABEL_31;
v6 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 64i64))(v4) == 0;
goto LABEL_21;
case 23:
v7 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
        qword_140C65980,
        *(unsigned int*)(qword_140C65980 + 60),
        0i64);
v5 = v7;
if (!v7)
goto LABEL_31;
v6 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 64i64))(v7) == 1;
goto LABEL_21;
case 24:
v8 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
        qword_140C65980,
        *(unsigned int*)(qword_140C65980 + 64),
        0i64);
v5 = v8;
if (!v8)
goto LABEL_31;
v6 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 64i64))(v8) == 2;
LABEL_21:
if (v6)
{
HIDWORD(result) = 0;
*(float*)&result = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 152i64))(v5);
}
else
{
LABEL_31:
result = 0i64;
}
break;
case 27:
return *(unsigned int*)(a1 + 572);
case 28:
return *(unsigned int*)(a1 + 576);
case 29:
return *(unsigned int*)(a1 + 580);
default:
if (*(_QWORD*)(qword_140C65898 + 120) != a1)
goto LABEL_31;
v9 = *(_QWORD*)(qword_140C65898 + 28048);
if (!v9)
goto LABEL_31;
v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 96i64))(v9);
if (v10 >= 11)
goto LABEL_31;
result = *(unsigned int*)(a1 + 4i64 * v10 + 540);
break;
}
return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;