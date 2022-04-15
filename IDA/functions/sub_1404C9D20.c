//----- (00000001404C9D20) ----------------------------------------------------
void __fastcall sub_1404C9D20(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbp
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	unsigned __int64 v7; // rsi
	_QWORD* v8; // rbx
	__int64* v9; // rbx
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int64* v12; // rbx
	int v13; // [rsp+50h] [rbp+18h] BYREF

	v13 = a3;
	v3 = qword_140C659F8;
	v5 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v13);
	v6 = *(_QWORD**)(*(_QWORD*)(v3 + 48) + 8 * (v5 % *(_QWORD*)(v3 + 40)));
	if (v6)
	{
		while (v5 != *v6 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v3 + 64))(&v13, v6 + 2))
		{
			v6 = (_QWORD*)v6[1];
			if (!v6)
				goto LABEL_5;
		}
		v9 = v6 + 3;
		if (v9)
		{
			v10 = *v9;
			if (*(_DWORD*)(v10 + 20) == a2)
			{
				v11 = v3 + 32;
			LABEL_16:
				sub_1400B6120(v11, (__int64)&v13);
				sub_1404C6DC0(v10);
				sub_14018B900(v10, 0);
				--* (_DWORD*)(v3 + 216);
				return;
			}
		}
	}
LABEL_5:
	v7 = (*(__int64(__fastcall**)(int*))(v3 + 96))(&v13);
	v8 = *(_QWORD**)(*(_QWORD*)(v3 + 88) + 8 * (v7 % *(_QWORD*)(v3 + 80)));
	if (v8)
	{
		while (v7 != *v8 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v3 + 104))(&v13, v8 + 2))
		{
			v8 = (_QWORD*)v8[1];
			if (!v8)
				return;
		}
		v12 = v8 + 3;
		if (v12)
		{
			v10 = *v12;
			if (*(_DWORD*)(v10 + 20) == a2)
			{
				v11 = v3 + 72;
				goto LABEL_16;
			}
		}
	}
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

