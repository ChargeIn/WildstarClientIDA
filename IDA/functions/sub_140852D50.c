//----- (0000000140852D50) ----------------------------------------------------
_QWORD* __fastcall sub_140852D50(__int64 a1, _QWORD* a2, unsigned __int64 a3)
{
	int v6; // eax
	__int64 v7; // rdi
	unsigned __int8* v8; // r8
	unsigned int v9; // r9d
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rdx
	int* v13; // rax
	unsigned __int8* v14; // r8
	unsigned int v15; // r9d
	__int64 v16; // rcx
	__int64 v17; // rdx
	int* v18; // rax
	int v19; // [rsp+40h] [rbp+8h] BYREF
	__int64 v20; // [rsp+58h] [rbp+20h]

	if (!*(_QWORD*)(a1 + 64) || (*(_BYTE*)(a1 + 90) & 0x40) != 0)
	{
		v6 = *(_DWORD*)(a1 + 96);
		v7 = 0i64;
		v20 = 1112014848i64;
		if ((v6 & 0x100) != 0)
		{
			sub_140836340(qword_140C61BB0, a1, 8, a3);
			LODWORD(v20) = 1112014848;
		}
		else
		{
			v8 = *(unsigned __int8**)(a1 + 80);
			v19 = dword_140C11014;
			if (v8)
			{
				v9 = *v8;
				v10 = 0i64;
				while (1)
				{
					v11 = (unsigned int)(v10 + 1);
					if (v8[v11] == 5)
						break;
					v10 = (unsigned int)v11;
					if ((unsigned int)v11 >= v9)
						goto LABEL_10;
				}
				v12 = (__int64)&v8[4 * v10 + ((v9 + 4) & 0xFFFFFFFC)];
			}
			else
			{
			LABEL_10:
				v12 = 0i64;
			}
			v13 = &v19;
			if (v12)
				v13 = (int*)v12;
			LODWORD(v20) = *v13;
		}
		if ((*(_BYTE*)(a1 + 90) & 0x20) != 0)
		{
			v14 = *(unsigned __int8**)(a1 + 80);
			v19 = dword_140C11018;
			if (v14)
			{
				v15 = *v14;
				v16 = 0i64;
				while (1)
				{
					v17 = (unsigned int)(v16 + 1);
					if (v14[v17] == 6)
						break;
					v16 = (unsigned int)v17;
					if ((unsigned int)v17 >= v15)
						goto LABEL_22;
				}
				v7 = (__int64)&v14[4 * v16 + ((v15 + 4) & 0xFFFFFFFC)];
			}
		LABEL_22:
			v18 = &v19;
			if (v7)
				v18 = (int*)v7;
			HIDWORD(v20) = *v18;
		}
		else
		{
			HIDWORD(v20) = 0;
		}
		*a2 = v20;
		return a2;
	}
	else
	{
		sub_140852D50();
		return a2;
	}
}
// 140C11014: using guessed type int dword_140C11014;
// 140C11018: using guessed type int dword_140C11018;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

