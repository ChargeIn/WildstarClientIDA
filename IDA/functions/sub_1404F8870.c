//----- (00000001404F8870) ----------------------------------------------------
__int64 __fastcall sub_1404F8870(_QWORD* a1)
{
	__int64 v2; // rbp
	char* v3; // rax
	unsigned int v4; // eax
	unsigned int v5; // esi
	unsigned __int16* v6; // r14
	unsigned int v7; // edi
	__int64 v8; // rax
	__int64 v9; // rbx
	unsigned __int64 v10; // rcx
	int v11; // eax
	_QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

	v2 = sub_1404F87C0(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(v13, v3);
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
	v6 = (unsigned __int16*)v13[1];
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
			v10 = *(_QWORD*)(v9 + 8);
			if (v10)
			{
				if (v10 <= qword_140C3FE70)
					v10 += qword_140C3FE68;
				else
					v10 = 0i64;
			}
			if (!(unsigned int)sub_14018E2C0(v10, v6))
			{
				v11 = *(_DWORD*)v9;
				*(_DWORD*)(v2 + 1040) = 1;
				*(_DWORD*)(v2 + 2080) = v11;
			}
			if (++v7 >= v5)
				goto LABEL_25;
		}
		v8 = qword_140C63848(off_140A6B860, v7, qword_140C63858);
	LABEL_17:
		v9 = v8;
		goto LABEL_18;
	}
LABEL_25:
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

