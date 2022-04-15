//----- (0000000140510930) ----------------------------------------------------
__int64 __fastcall sub_140510930(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
	void* v6; // rax
	__int64 v7; // rax
	char* v8; // rdx
	__int64 v9; // rcx
	_QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

	sub_140058710(a1, (unsigned __int64*)"fontFace", 8ui64);
	v6 = sub_1400580E0(a1, -2);
	sub_14005E8E0(a1, (__int64)v6, (int*)(*(_QWORD*)(a1 + 16) - 16i64), *(_QWORD*)(a1 + 16) - 16i64);
	v7 = *(_QWORD*)(a1 + 16) - 16i64;
	if (*(_DWORD*)(v7 + 8) != 4)
	{
		if (!(unsigned int)sub_14005E620(a1, *(_QWORD*)(a1 + 16) - 16i64))
		{
			v8 = 0i64;
			goto LABEL_8;
		}
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v7 = *(_QWORD*)(a1 + 16) - 16i64;
	}
	v8 = (char*)(*(_QWORD*)v7 + 32i64);
LABEL_8:
	sub_14018F2D0(v11, v8);
	v9 = a4[1];
	a4[1] = v11[1];
	a4[2] = v11[2];
	a4[3] = v11[3];
	if (v9)
		sub_14018B900(v9, 0);
	*(_QWORD*)(a1 + 16) -= 16i64;
	return a4[1];
}

