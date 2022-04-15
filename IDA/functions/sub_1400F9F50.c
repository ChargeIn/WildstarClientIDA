//----- (00000001400F9F50) ----------------------------------------------------
_QWORD* __fastcall sub_1400F9F50(__int64 a1, _QWORD* a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	__int64 v7; // rsi
	__int64 v8; // rdi
	char* v9; // rdi
	int* v10; // rsi
	_QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

	if (*(_QWORD*)(a1 + 16) && (unsigned int)sub_1400F9ED0(a1) == 4)
	{
		v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v6 = *(_QWORD*)(v5 + 16);
		*(_QWORD*)v6 = *v4;
		*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
		*(_QWORD*)(v5 + 16) += 16i64;
		v7 = *(_QWORD*)(a1 + 16);
		v8 = *(_QWORD*)(v7 + 16) - 16i64;
		if (*(_DWORD*)(v8 + 8) != 4)
		{
			if (!(unsigned int)sub_14005E620(*(_QWORD*)(a1 + 16), *(_QWORD*)(v7 + 16) - 16i64))
			{
				v9 = 0i64;
			LABEL_10:
				sub_14018F2D0(v12, v9);
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
				a2[1] = v12[1];
				a2[2] = v12[2];
				a2[3] = v12[3];
				return a2;
			}
			if (*(_QWORD*)(*(_QWORD*)(v7 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v7 + 32) + 112i64))
				sub_14005E2C0(v7);
			v8 = *(_QWORD*)(v7 + 16) - 16i64;
		}
		v9 = (char*)(*(_QWORD*)v8 + 32i64);
		goto LABEL_10;
	}
	a2[1] = 0i64;
	a2[2] = 0i64;
	a2[3] = 0i64;
	v10 = sub_14018B280(2i64, 0);
	a2[3] = (char*)v10 + 2;
	a2[1] = v10;
	a2[2] = v10;
	sub_1407DB590(v10, dword_1409D4854, 0i64);
	a2[2] = v10;
	if (v10)
		*(_WORD*)v10 = 0;
	return a2;
}
// 1400F9F9A: variable 'v5' is possibly undefined
// 1409D4854: using guessed type int dword_1409D4854[6];

