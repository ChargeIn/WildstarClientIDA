//----- (0000000140448A80) ----------------------------------------------------
__int64 __fastcall sub_140448A80(__int64 a1, int a2, int a3, __int64 a4)
{
	_QWORD** v4; // rbp
	unsigned __int64 v8; // rsi
	unsigned __int128 v9; // rax
	__int64 i; // rdi
	__int64 v11; // rbx
	unsigned int v12; // esi
	__int64 v13; // r14
	_DWORD* v14; // r14
	unsigned int j; // edi
	__int64 v16; // rbx
	char v18[56]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v19; // [rsp+60h] [rbp+8h] BYREF

	v19 = a1;
	v4 = (_QWORD**)qword_140C658F8;
	v8 = 0i64;
	v9 = *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
		* (unsigned __int128)0xAAAAAAAAAAAAAAABui64;
	if (*((_QWORD*)&v9 + 1) >> 5)
	{
		for (i = 0i64; ; i += 48i64)
		{
			*(_QWORD*)&v9 = (*(__int64(__fastcall**)(_QWORD*))(*v4[9] + 32i64))(v4[9]);
			v11 = i + v9;
			if (*(_DWORD*)(i + v9) == a2)
				break;
			++v8;
			v9 = *(unsigned int*)(*(__int64(__fastcall**)(_QWORD*))(*v4[8] + 32i64))(v4[8])
				* (unsigned __int128)0xAAAAAAAAAAAAAAABui64;
			if (v8 >= *((_QWORD*)&v9 + 1) >> 5)
				return v9;
		}
		v12 = *(_DWORD*)(v11 + 32);
		if (v12 < *(_DWORD*)(v11 + 36))
		{
			while (1)
			{
				v13 = *(unsigned int*)((*(__int64(__fastcall**)(_QWORD*))(*v4[14] + 32i64))(v4[14]) + 4i64 * v12);
				*(_QWORD*)&v9 = (*(__int64(__fastcall**)(_QWORD*))(*v4[10] + 32i64))(v4[10]);
				v14 = (_DWORD*)(v9 + 16 * v13);
				if (*v14 == a3)
					break;
				if (++v12 >= *(_DWORD*)(v11 + 36))
					return v9;
			}
			for (j = v14[2]; j < v14[3]; ++j)
			{
				v16 = *(unsigned int*)((*(__int64(__fastcall**)(_QWORD*))(*v4[14] + 32i64))(v4[14]) + 4i64 * j);
				v19 = *(_QWORD*)((*(__int64(__fastcall**)(_QWORD*))(*v4[11] + 32i64))(v4[11]) + 8 * v16);
				*(_QWORD*)&v9 = sub_14044A5F0(a4, (__int64)v18, (int*)&v19);
			}
		}
	}
	return v9;
}
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140448A80: using guessed type char var_38[56];

