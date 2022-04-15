//----- (0000000140022270) ----------------------------------------------------
__int64 __fastcall sub_140022270(_QWORD* a1)
{
	unsigned __int64 v2; // rdx
	_DWORD* v3; // rcx
	__int64 result; // rax
	__int64* v5; // rdx
	__int64 v6; // rsi
	__int64 v7; // rdi
	int v8; // eax
	__int64 v9; // r9
	__int64 v10; // rax
	__int64 v11; // rdx
	_DWORD* v12; // rax
	__int64 v13; // [rsp+48h] [rbp+10h] BYREF
	__int64 v14; // [rsp+50h] [rbp+18h] BYREF
	__int64 v15; // [rsp+58h] [rbp+20h] BYREF

	if ((dword_140C8B1B8 & 1) == 0)
	{
		dword_140C8B1C4 = 0;
		dword_140C8B1B8 |= 1u;
		dword_140C8B1C8 = 3000;
		dword_140C8B1CC = 1;
		dword_140C8B1D0 = 3000;
		dword_140C8B1C0 = dword_140C636A8 - 3000;
		sub_1407DD89C(nullsub_8);
	}
	v2 = (int)sub_140056D60(a1, 1u) - 1i64;
	if (v2 >= *(_QWORD*)(qword_140C66DA8 + 272))
	{
		v3 = (_DWORD*)a1[2];
		result = 1i64;
		*v3 = 0;
		v3[2] = 1;
		a1[2] += 16i64;
		return result;
	}
	if (qword_140C635F0)
	{
		if (dword_140C636A8 - dword_140C8B1C0 >= (unsigned int)dword_140C8B1D0)
		{
			if (dword_140C636A8 - dword_140C8B1C0 < (unsigned int)dword_140C8B1C8)
			{
				dword_140C8B1C0 += dword_140C8B1D0;
			}
			else
			{
				dword_140C8B1C0 = dword_140C636A8;
				dword_140C8B1C4 = 1;
			}
			goto LABEL_12;
		}
		if (dword_140C8B1C4 != dword_140C8B1CC)
		{
			++dword_140C8B1C4;
		LABEL_12:
			v5 = (__int64*)(*(_QWORD*)(qword_140C66DA8 + 264) + 816 * v2);
			v14 = 0i64;
			v14 = *v5;
			v6 = *(_QWORD*)(qword_140C66DA8 + 184);
			v13 = *(_QWORD*)(qword_140C635F0 + 280);
			if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 264i64))(
				qword_140C65808,
				&v13,
				1767i64,
				&v14))
			{
				v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
				v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 32i64))(v13);
				v9 = *(_QWORD*)(v6 + 16);
				if (v9)
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v9 + 16))(
						*(_QWORD*)(v9 + 8),
						v7 + 4,
						(unsigned int)(v8 - 4));
				v15 = 0i64;
				v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
				v11 = *(unsigned int*)(v6 + 152);
				v15 = v10;
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
					qword_140C65808,
					v11,
					580i64,
					&v15);
			}
			v12 = (_DWORD*)a1[2];
			*v12 = 1;
			goto LABEL_18;
		}
	}
	v12 = (_DWORD*)a1[2];
	*v12 = 0;
LABEL_18:
	v12[2] = 1;
	a1[2] += 16i64;
	return 1i64;
}
// 14094CD00: using guessed type __int64 __fastcall nullsub_8();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;
// 140C8B1B8: using guessed type int dword_140C8B1B8;
// 140C8B1C0: using guessed type int dword_140C8B1C0;
// 140C8B1C4: using guessed type int dword_140C8B1C4;
// 140C8B1C8: using guessed type int dword_140C8B1C8;
// 140C8B1CC: using guessed type int dword_140C8B1CC;
// 140C8B1D0: using guessed type int dword_140C8B1D0;

