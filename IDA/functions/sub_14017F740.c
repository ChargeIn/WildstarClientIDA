//----- (000000014017F740) ----------------------------------------------------
__int64 __fastcall sub_14017F740(_QWORD* a1)
{
	__int64 v2; // rsi
	char* v3; // rax
	unsigned int v4; // eax
	unsigned int v5; // ebp
	unsigned __int16* v6; // r14
	unsigned int v7; // edi
	__int64 v8; // rax
	unsigned int* v9; // rbx
	unsigned __int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rcx
	_QWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF

	v2 = sub_14017F690(a1);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(v14, v3);
	if (qword_140C63838)
	{
		v4 = qword_140C63838(off_140A6B860, qword_140C63858);
	}
	else
	{
		if (dword_140C6466C)
		{
			v5 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140218B60() < 0)
		{
			v5 = 0;
			goto LABEL_9;
		}
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63EB8 + 40i64))(qword_140C63EB8);
	}
	v5 = v4;
LABEL_9:
	v6 = (unsigned __int16*)v14[1];
	v7 = 0;
	if (v5)
	{
		while (!qword_140C63848)
		{
			if (dword_140C6466C)
			{
				v9 = 0i64;
			}
			else
			{
				if ((int)sub_140218B60() >= 0)
				{
					v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63EB8 + 32i64))(qword_140C63EB8, v7);
					goto LABEL_17;
				}
				v9 = 0i64;
			}
		LABEL_18:
			v10 = *((_QWORD*)v9 + 1);
			if (v10)
			{
				if (v10 <= qword_140C3FE70)
					v10 += qword_140C3FE68;
				else
					v10 = 0i64;
			}
			if (!(unsigned int)sub_14018E2C0(v10, v6))
			{
				v11 = *v9;
				v12 = *(_QWORD*)(v2 + 2136);
				*(_DWORD*)(v2 + 1024) = 1;
				*(_DWORD*)(v2 + 2048) = v11;
				if (v12)
					(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64))(*(_QWORD*)v12 + 1064i64))(
						v12,
						v11,
						v2 + 1136,
						0i64,
						v2 + 1060,
						v2 + 1072,
						v2 + 1136,
						v2 + 1200);
			}
			if (++v7 >= v5)
				goto LABEL_26;
		}
		v8 = qword_140C63848(off_140A6B860, v7, qword_140C63858);
	LABEL_17:
		v9 = (unsigned int*)v8;
		goto LABEL_18;
	}
LABEL_26:
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return 0i64;
}
// 140A6B860: using guessed type wchar_t *off_140A6B860[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63EB8: using guessed type __int64 qword_140C63EB8;
// 140C6466C: using guessed type int dword_140C6466C;

