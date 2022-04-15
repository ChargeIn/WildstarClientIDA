//----- (0000000140897E70) ----------------------------------------------------
char __fastcall sub_140897E70(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5)
{
	__int64 v8; // rax
	unsigned __int16 v9; // cx
	unsigned __int16* v10; // rdi
	__int64 v11; // rdi
	int v12; // eax
	unsigned __int16 v13; // bp
	int v14; // eax
	__int64 v15; // rdx
	unsigned __int16* v16; // rdi
	unsigned __int16 v17; // ax
	unsigned int v18; // ecx
	unsigned __int16 v19; // bp
	unsigned __int16* v20; // rsi
	unsigned __int64 i; // rcx

	if ((*(_BYTE*)(a1 + 72) & 1) != 0 && a5 == *(_QWORD*)(a2 + 64))
		sub_140897940(a1, a2, a5);
	if (*(_BYTE*)(a2 + 73))
	{
		v13 = *(_WORD*)(a2 + 76);
		if (!v13)
			v13 = 1;
		v14 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)a4 + 8i64 * a3) + 24i64);
		--* (_WORD*)(a5 + 32);
		--* (_WORD*)(a5 + 34);
		*(_DWORD*)(a5 + 28) -= v14;
		sub_14087C180(a5, a3);
		v8 = (__int64)sub_14086C450(a5 + 40, a3);
		if (v8)
		{
			sub_14087C120(a5, a3);
			v15 = *(_QWORD*)(a5 + 48);
			v16 = *(unsigned __int16**)(a5 + 40);
			v17 = ((__int64)(unsigned int)(*(_DWORD*)(a4 + 8) - *(_DWORD*)a4) >> 3) - 1;
			if (v13 < v17)
				v17 = v13;
			v18 = v17;
			v8 = (v15 - (__int64)v16) >> 1;
			if ((unsigned int)v8 > v18)
			{
				v19 = *v16;
				if ((unsigned __int64)v16 < v15 - 2)
				{
					v20 = v16 + 1;
					for (i = ((unsigned __int64)(v15 - 2 - (_QWORD)v16 - 1) >> 1) + 1; i; --i)
						*v16++ = *v20++;
				}
				*(_QWORD*)(a5 + 48) -= 2i64;
				sub_14087C150(a5, v19);
				LOBYTE(v8) = sub_14087C2D0(a5, v19);
				if (!(_BYTE)v8)
				{
					LODWORD(v8) = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)a4 + 8i64 * v19) + 24i64);
					*(_DWORD*)(a5 + 28) += v8;
					++* (_WORD*)(a5 + 32);
				}
			}
		}
		else
		{
			*(_WORD*)(a5 + 34) = 0;
		}
	}
	else
	{
		LOBYTE(v8) = sub_14087C2D0(a5, a3);
		if (!(_BYTE)v8)
		{
			LOBYTE(v8) = sub_14087C180(a5, a3);
			--* (_WORD*)(a5 + 34);
		}
		if (*(_WORD*)(a2 + 76))
		{
			--* (_WORD*)(a5 + 32);
			v8 = (__int64)sub_14086C450(a5 + 40, a3);
			if (v8)
			{
				sub_14087C120(a5, a3);
				*(_DWORD*)(a5 + 28) -= *(_DWORD*)(*(_QWORD*)(*(_QWORD*)a4 + 8i64 * a3) + 24i64);
				v9 = ((__int64)(unsigned int)(*(_DWORD*)(a4 + 8) - *(_DWORD*)a4) >> 3) - 1;
				if (*(_WORD*)(a2 + 76) < v9)
					v9 = *(_WORD*)(a2 + 76);
				v10 = *(unsigned __int16**)(a5 + 40);
				LOBYTE(v8) = v9;
				if ((unsigned int)((__int64)(*(_QWORD*)(a5 + 48) - (_QWORD)v10) >> 1) > v9)
				{
					v11 = *v10;
					sub_14087C150(a5, v11);
					v12 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)a4 + 8 * v11) + 24i64);
					++* (_WORD*)(a5 + 32);
					*(_DWORD*)(a5 + 28) += v12;
					LOBYTE(v8) = sub_14086CAE0((__int64*)(a5 + 40), 0);
				}
			}
			else
			{
				*(_WORD*)(a5 + 34) = 0;
			}
		}
	}
	return v8;
}

