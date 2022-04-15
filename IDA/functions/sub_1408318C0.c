//----- (00000001408318C0) ----------------------------------------------------
__int64 __fastcall sub_1408318C0(_BYTE* a1)
{
	__int64 v1; // rsi
	int v3; // r9d
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx
	__int64 v7; // r8
	__m128* v8; // rax
	__m128* v9; // rax
	__int64 v10; // rbx
	int v11; // edx
	unsigned int v12; // eax
	unsigned int v13; // edi
	__int64 v15; // rdi
	__int64 v16; // rax

	v1 = *(_QWORD*)a1;
	v3 = *(_DWORD*)(*(_QWORD*)a1 + 152i64);
	if (!v3 || (v4 = qword_140C61CC8, qword_140C61CC8 == qword_140C61CD0))
	{
	LABEL_10:
		v8 = (__m128*)sub_1408819F0(dword_140C10F28, 1184i64);
		if (v8 && (v9 = sub_140846AF0(v8), (v10 = (__int64)v9) != 0))
		{
			v11 = 375;
			if (*(char*)(v1 + 382) >= 0)
				v11 = dword_140C110B4;
			sub_140848840((__int64)v9, v11);
			v12 = sub_140847260(v10, v1, 1);
			v13 = v12;
			if (v12 == 63)
			{
				*(_QWORD*)(v10 + 8) = 0i64;
				if (qword_140C62420)
					*(_QWORD*)(qword_140C62420 + 8) = v10;
				else
					qword_140C62418 = v10;
				qword_140C62420 = v10;
				return 1i64;
			}
			if (v12 == 1)
			{
				v15 = sub_140832DE0(v1);
				if (v15 && (!*(_BYTE*)(v10 + 88) || (unsigned int)sub_140846F60(v10) == 1))
				{
					*(_QWORD*)(v10 + 8) = 0i64;
					v16 = *(_QWORD*)(v15 + 16);
					if (v16)
						*(_QWORD*)(v16 + 8) = v10;
					else
						*(_QWORD*)(v15 + 8) = v10;
					++* (_DWORD*)v15;
					*(_QWORD*)(v15 + 16) = v10;
					if ((*(_BYTE*)(v1 + 384) & 1) != 0)
						*(_QWORD*)(v10 + 32) = sub_140832C00(v15);
					sub_140862BE0(v15 + 32);
					a1[16] = 1;
					return 1i64;
				}
				v13 = 2;
			}
			sub_140831560(v10);
		}
		else
		{
			v13 = 2;
			sub_14085E170(v1, 1);
		}
		return v13;
	}
	while (1)
	{
		v5 = *(_QWORD*)(*(_QWORD*)v4 + 8i64);
		if (v5)
			break;
	LABEL_9:
		v4 += 8i64;
		if (v4 == qword_140C61CD0)
			goto LABEL_10;
	}
	while (1)
	{
		v6 = *(_QWORD*)(v5 + 16);
		v7 = v6 ? *(_QWORD*)(v6 + 24) : 0i64;
		if (*(_DWORD*)(v7 + 152) == v3)
			break;
		v5 = *(_QWORD*)(v5 + 8);
		if (!v5)
			goto LABEL_9;
	}
	sub_140847260(v5, v1, 0);
	sub_14085F4C0(v1);
	return 5i64;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C110B4: using guessed type int dword_140C110B4;
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;
// 140C62418: using guessed type __int64 qword_140C62418;
// 140C62420: using guessed type __int64 qword_140C62420;

