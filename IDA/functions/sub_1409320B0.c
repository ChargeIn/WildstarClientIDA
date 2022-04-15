//----- (00000001409320B0) ----------------------------------------------------
__int64 __fastcall sub_1409320B0(unsigned int* a1, int a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v4; // rdi
	__int64 v6; // rcx
	__int64 v7; // rax
	_QWORD* v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // rdi
	_BYTE* v11; // rax
	_BYTE* v12; // rcx
	_BYTE* v13; // rax
	char* v14; // rax
	_QWORD* v15; // rax
	_QWORD* v16; // rax

	result = *a1;
	v4 = a3;
	if (!(_DWORD)result)
	{
		if (a2 == 267)
			v4 = a3 + 48;
		if ((a2 & 0x200) == 0 || (unsigned __int64)(v4 + 0x80000000i64) <= 0xFFFFFFFF)
		{
			if (a2 > 12)
			{
				if ((a2 & 0x100) != 0)
				{
					a1[26] = 1;
					v14 = sub_14092D140((__int64)a1, 1, 0, 0i64, a2, v4);
					if (v14)
					{
						*v14 = -1;
						v14[1] |= 0x30u;
						v15 = sub_14092D610((__int64)a1, 2i64);
						if (v15)
						{
							*(_BYTE*)v15 = 1;
							v12 = (char*)v15 + 1;
							++* ((_QWORD*)a1 + 11);
							goto LABEL_29;
						}
					}
				}
				else
				{
					v16 = sub_14092D610((__int64)a1, 7i64);
					if (v16)
					{
						*(_BYTE*)v16 = 6;
						*((_QWORD*)a1 + 11) += 6i64;
						*((_BYTE*)v16 + 1) = 104;
						*(_DWORD*)((char*)v16 + 2) = v4;
						v12 = (char*)v16 + 6;
						goto LABEL_29;
					}
				}
				return *a1;
			}
		LABEL_17:
			v10 = a2;
			if (byte_1409D00E0[a2] >= 8u)
			{
				v13 = sub_14092D610((__int64)a1, 4i64);
				if (v13)
				{
					*v13 = 3;
					*((_QWORD*)a1 + 11) += 3i64;
					v13[1] = 65;
					v12 = v13 + 3;
					v13[2] = byte_1409D00E0[v10 + 16] + 80;
					goto LABEL_29;
				}
			}
			else
			{
				v11 = sub_14092D610((__int64)a1, 3i64);
				if (v11)
				{
					*v11 = 2;
					*((_QWORD*)a1 + 11) += 2i64;
					v12 = v11 + 2;
					v11[1] = byte_1409D00E0[v10 + 16] + 80;
				LABEL_29:
					*v12 = -61;
					return 0i64;
				}
			}
			return *a1;
		}
		v6 = *((_QWORD*)a1 + 7);
		v7 = *(_QWORD*)(v6 + 8);
		if ((unsigned __int64)(v7 + 11) > 0xFF0)
		{
			v9 = (_QWORD*)off_140C1B1E0(4096i64);
			if (!v9)
			{
				*a1 = 2;
				goto LABEL_12;
			}
			*v9 = *((_QWORD*)a1 + 7);
			*((_QWORD*)a1 + 7) = v9;
			v9[1] = 11i64;
			v8 = v9 + 2;
		}
		else
		{
			*(_QWORD*)(v6 + 8) = v7 + 11;
			v8 = (_QWORD*)(v6 + v7 + 16);
		}
		if (v8)
		{
			*(_BYTE*)v8 = 10;
			*((_QWORD*)a1 + 11) += 10i64;
			*(_WORD*)((char*)v8 + 1) = -17847;
			*(_QWORD*)((char*)v8 + 3) = v4;
		LABEL_15:
			a2 = 12;
			goto LABEL_17;
		}
	LABEL_12:
		result = *a1;
		if ((_DWORD)result)
			return result;
		goto LABEL_15;
	}
	return result;
}
// 1409D00E0: using guessed type _BYTE byte_1409D00E0[32];
// 140C1B1E0: using guessed type __int64 (__fastcall *off_140C1B1E0)(_QWORD);

