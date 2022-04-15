//----- (000000014077D660) ----------------------------------------------------
__int64 __fastcall sub_14077D660(__int64 a1)
{
	__int64 v2; // rax
	int v3; // ebx
	int v4; // eax
	__int64 v5; // rax
	__int64(__fastcall * v6)(wchar_t**, __int64); // rax
	unsigned int v7; // ebx
	unsigned int v8; // eax
	unsigned int v9; // edi
	unsigned int* v10; // rax
	__int64 v11; // rcx

	v2 = sub_140200220(0xB9u);
	v3 = 200;
	if (v2)
		v4 = *(_DWORD*)(v2 + 4);
	else
		v4 = 200;
	*(_DWORD*)(a1 + 53128) = v4;
	v5 = sub_140200220(0xBAu);
	if (v5)
		v3 = *(_DWORD*)(v5 + 4);
	v6 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	*(_DWORD*)(a1 + 53132) = v3;
	v7 = 0;
	if (v6)
	{
		v8 = v6(off_140A6D150, qword_140C63858);
	}
	else
	{
		if (dword_140C64798)
		{
			v9 = 0;
			goto LABEL_14;
		}
		if ((int)sub_140236FE0() < 0)
		{
			v9 = 0;
			goto LABEL_14;
		}
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64BD0 + 40i64))(qword_140C64BD0);
	}
	v9 = v8;
LABEL_14:
	if (v9)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C64798 && (int)sub_140236FE0() >= 0)
			{
				v10 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BD0 + 32i64))(
					qword_140C64BD0,
					v7);
			LABEL_20:
				if (v10)
				{
					v11 = 160i64 * *v10;
					*(_QWORD*)(v11 + a1 + 8) = v10;
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 24i64))(
						qword_140C65848,
						v11 + a1 + 16,
						v10[6]);
				}
			}
			if (++v7 >= v9)
				return 0i64;
		}
		v10 = (unsigned int*)qword_140C63848(off_140A6D150, v7, qword_140C63858);
		goto LABEL_20;
	}
	return 0i64;
}
// 140A6D150: using guessed type wchar_t *off_140A6D150[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64798: using guessed type int dword_140C64798;
// 140C64BD0: using guessed type __int64 qword_140C64BD0;
// 140C65848: using guessed type __int64 qword_140C65848;

