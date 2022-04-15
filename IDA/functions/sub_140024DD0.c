//----- (0000000140024DD0) ----------------------------------------------------
__int64 __fastcall sub_140024DD0(_QWORD* a1)
{
	unsigned __int64 v2; // rdi
	char* v3; // rax
	void* v4; // rbx
	__int64 v5; // rdx
	__int64 v6; // rsi
	__int64 v7; // rdi
	int v8; // eax
	__int64 v9; // r9
	__int64 v10; // rax
	__int64 v11; // rdx
	bool v12; // zf
	__int64 v14; // [rsp+20h] [rbp-38h] BYREF
	void* v15; // [rsp+28h] [rbp-30h]
	__int64 v16; // [rsp+30h] [rbp-28h] BYREF
	void* lpv; // [rsp+38h] [rbp-20h]
	void* v18; // [rsp+40h] [rbp-18h]
	__int64 v19; // [rsp+68h] [rbp+10h] BYREF
	__int64 v20; // [rsp+70h] [rbp+18h] BYREF

	if (!*(_DWORD*)(qword_140C66DA8 + 540) && !*(_DWORD*)(qword_140C66DA8 + 368))
	{
		v2 = (int)sub_140056D60(a1, 1u) - 1i64;
		if (v2 < *(_QWORD*)(qword_140C66DA8 + 272))
		{
			v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
			sub_14018F2D0(&v16, v3);
			v4 = lpv;
			if (lpv == v18 || !(unsigned int)sub_1403E1170(lpv, 0))
			{
				*(_DWORD*)(qword_140C66DA8 + 368) = 3;
				v12 = *(_DWORD*)(qword_140C66DA8 + 368) == 3;
				lpv = 0i64;
				v18 = 0i64;
				v16 = 15i64;
				if (v12)
					sub_140022190(qword_140C66DA8, (unsigned int*)&v16);
			}
			else
			{
				v14 = 0i64;
				v15 = 0i64;
				v5 = *(_QWORD*)(816 * v2 + *(_QWORD*)(qword_140C66DA8 + 264));
				v15 = v4;
				v14 = v5;
				v6 = *(_QWORD*)(qword_140C66DA8 + 184);
				v19 = *(_QWORD*)(qword_140C635F0 + 280);
				if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, __int64*))(*(_QWORD*)qword_140C65808
					+ 264i64))(
						qword_140C65808,
						&v19,
						1926i64,
						&v14))
				{
					v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 16i64))(v19);
					v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 32i64))(v19);
					v9 = *(_QWORD*)(v6 + 16);
					if (v9)
						(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v9 + 16))(
							*(_QWORD*)(v9 + 8),
							v7 + 4,
							(unsigned int)(v8 - 4));
					v20 = 0i64;
					v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 16i64))(v19);
					v11 = *(unsigned int*)(v6 + 152);
					v20 = v10;
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
						qword_140C65808,
						v11,
						580i64,
						&v20);
				}
				*(_DWORD*)(qword_140C66DA8 + 368) = 3;
			}
			if (v4)
				sub_14018B900((__int64)v4, 0);
		}
	}
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

