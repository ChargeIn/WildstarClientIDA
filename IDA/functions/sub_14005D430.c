#include "../winhttp.h"

//----- (000000014005D430) ----------------------------------------------------
void __fastcall sub_14005D430(__int64 a1)
{
	__int64 v1; // r11
	__int64 v2; // r8
	__int64 v3; // r9
	__int64 v4; // rcx
	int v5; // edx
	__int64 v6; // rax
	char v7; // r10
	__int64 v8; // rax
	__int64 v9; // r8
	__int64 v10; // r10
	__int64 v11; // rax
	int v12; // ecx
	bool v13; // zf
	__int64 v14; // rcx
	int v15; // edx
	__int64 v16; // rcx
	char v17; // r9
	bool v18; // cc

	v1 = a1;
	if (a1)
	{
		while (1)
		{
			if ((*(_BYTE*)(v1 + 9) & 0x10) != 0)
			{
				v2 = *(int*)(v1 + 56);
				if (*(_DWORD*)(v1 + 56))
				{
					v3 = 16 * v2;
					do
					{
						v3 -= 16i64;
						--v2;
						v4 = v3 + *(_QWORD*)(v1 + 24);
						v5 = *(_DWORD*)(v4 + 8);
						if (v5 >= 4)
						{
							v6 = *(_QWORD*)v4;
							if (v5 == 4)
							{
								*(_BYTE*)(v6 + 9) &= 0xFCu;
							}
							else
							{
								v7 = *(_BYTE*)(v6 + 9);
								if ((v7 & 3) != 0 || v5 == 7 && (v7 & 8) != 0)
									*(_DWORD*)(v4 + 8) = 0;
							}
						}
					} while (v2);
				}
			}
			v8 = 1i64 << *(_BYTE*)(v1 + 11);
			v9 = (int)v8;
			if ((_DWORD)v8)
				break;
		LABEL_29:
			v1 = *(_QWORD*)(v1 + 48);
			if (!v1)
				return;
		}
		v10 = 40i64 * (int)v8;
		while (1)
		{
			v11 = *(_QWORD*)(v1 + 32);
			v10 -= 40i64;
			--v9;
			if (*(_DWORD*)(v10 + v11 + 8))
			{
				v12 = *(_DWORD*)(v10 + v11 + 24);
				v13 = v12 == 4;
				if (v12 >= 4)
				{
					v14 = *(_QWORD*)(v10 + v11 + 16);
					if (v13)
					{
						*(_BYTE*)(v14 + 9) &= 0xFCu;
					}
					else if ((*(_BYTE*)(v14 + 9) & 3) != 0)
					{
						goto LABEL_26;
					}
				}
				v15 = *(_DWORD*)(v10 + v11 + 8);
				if (v15 >= 4)
				{
					v16 = *(_QWORD*)(v10 + v11);
					if (v15 != 4)
					{
						v17 = *(_BYTE*)(v16 + 9);
						if ((v17 & 3) == 0 && (v15 != 7 || (v17 & 8) == 0))
							goto LABEL_28;
					LABEL_26:
						v18 = *(_DWORD*)(v10 + v11 + 24) < 4;
						*(_DWORD*)(v10 + v11 + 8) = 0;
						if (!v18)
							*(_DWORD*)(v10 + v11 + 24) = 11;
						goto LABEL_28;
					}
					*(_BYTE*)(v16 + 9) &= 0xFCu;
				}
			}
		LABEL_28:
			if (!v9)
				goto LABEL_29;
		}
	}
}

