//----- (0000000140027D80) ----------------------------------------------------
__int64 __fastcall sub_140027D80(_QWORD* a1)
{
	int v2; // esi
	unsigned __int64 v3; // rdi
	unsigned int v4; // r9d
	_DWORD* v5; // rcx
	unsigned int v6; // r8d
	int v7; // eax
	__int64 v8; // rdx
	__int64 v9; // rdi
	__int64 v10; // rbx
	int v11; // eax
	__int64 v12; // r9
	__int64 v13; // rax
	__int64 v14; // rdx
	__int64 v16; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v17; // [rsp+28h] [rbp-10h]
	__int64 v18; // [rsp+48h] [rbp+10h] BYREF
	__int64 v19; // [rsp+50h] [rbp+18h] BYREF

	if (!*(_DWORD*)(qword_140C66DA8 + 540) && !*(_DWORD*)(qword_140C66DA8 + 368))
	{
		v2 = 1;
		v3 = (int)sub_140056D60(a1, 1u) - 1i64;
		if (v3 < *(_QWORD*)(qword_140C66DA8 + 272))
		{
			v4 = sub_140056D60(a1, 2u);
			if (v4)
			{
				v5 = dword_140A12138;
				if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
					v5 = (_DWORD*)(a1[3] + 32i64);
				v6 = 0;
				v7 = v5[2];
				if (!v7 || v7 == 1 && !*v5)
					v2 = 0;
				v17 = 0i64;
				v16 = 0i64;
				LOBYTE(v6) = v2 != 0;
				v8 = *(_QWORD*)(816 * v3 + *(_QWORD*)(qword_140C66DA8 + 264));
				v17 = __PAIR64__(v6, v4);
				v16 = v8;
				v9 = *(_QWORD*)(qword_140C66DA8 + 184);
				v18 = *(_QWORD*)(qword_140C635F0 + 280);
				if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, __int64*))(*(_QWORD*)qword_140C65808
					+ 264i64))(
						qword_140C65808,
						&v18,
						322i64,
						&v16))
				{
					v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 16i64))(v18);
					v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 32i64))(v18);
					v12 = *(_QWORD*)(v9 + 16);
					if (v12)
						(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v12 + 16))(
							*(_QWORD*)(v12 + 8),
							v10 + 4,
							(unsigned int)(v11 - 4));
					v19 = 0i64;
					v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 16i64))(v18);
					v14 = *(unsigned int*)(v9 + 152);
					v19 = v13;
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
						qword_140C65808,
						v14,
						580i64,
						&v19);
				}
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

