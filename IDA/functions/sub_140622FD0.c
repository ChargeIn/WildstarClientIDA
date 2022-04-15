//----- (0000000140622FD0) ----------------------------------------------------
_QWORD* __fastcall sub_140622FD0(__m128* a1)
{
	__int64 v2; // r9
	_QWORD* result; // rax
	_QWORD* v4; // rbx
	unsigned int v5; // edi
	__int64 v6; // rax
	unsigned int v7; // r8d
	__int64 v8; // rax
	__int128 v9; // [rsp+60h] [rbp-68h] BYREF
	__int128 v10[4]; // [rsp+70h] [rbp-58h] BYREF

	sub_14061F3D0((__int64)a1, (__int64)v10, a1 + 22, a1 + 21, (__m128*)a1[31].m128_i32);
	result = (_QWORD*)a1[98].m128_u64[1];
	v4 = (_QWORD*)result[2];
	if (v4 != result)
	{
		do
		{
			v5 = *((_DWORD*)v4 + 8);
			if (qword_140C63840)
			{
				v6 = qword_140C63840(off_140A6DFF8, v5, qword_140C63858);
			}
			else if (dword_140C64C04)
			{
				v6 = 0i64;
			}
			else if ((int)sub_140248CA0() >= 0)
			{
				v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, v5);
			}
			else
			{
				v6 = 0i64;
			}
			v7 = a1[56].m128_u32[1];
			v9 = 0i64;
			sub_1405787D0((__int64)v10, 0, v7, v2, v6, 0i64, v10, 0, 0i64, &v9, 0);
			v8 = v4[3];
			if (v8)
			{
				v4 = (_QWORD*)v4[3];
				for (result = *(_QWORD**)(v8 + 16); result; result = (_QWORD*)result[2])
					v4 = result;
			}
			else
			{
				for (result = (_QWORD*)v4[1]; v4 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v4 = result;
				if ((_QWORD*)v4[3] != result)
					v4 = result;
			}
		} while (v4 != (_QWORD*)a1[98].m128_u64[1]);
	}
	return result;
}
// 1406230C6: variable 'v2' is possibly undefined
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C64C04: using guessed type int dword_140C64C04;
// 140622FD0: using guessed type __int128 var_58[4];

