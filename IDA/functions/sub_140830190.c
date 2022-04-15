//----- (0000000140830190) ----------------------------------------------------
__int64 __fastcall sub_140830190(__int64 a1, int a2, __int64 a3)
{
	_QWORD* v5; // r10
	__int64 v6; // r9
	__int64 v7; // r8
	_DWORD* v8; // rdi
	_DWORD* v9; // rax
	_DWORD* v10; // rsi
	unsigned __int64 i; // rcx

	if (a3)
	{
		sub_140830E60(a3 + 56, a2);
		return 1i64;
	}
	else
	{
		v5 = *(_QWORD**)(a1 + 56);
		LODWORD(v6) = 0;
		if (v5)
		{
			do
			{
			LABEL_8:
				v7 = v5[2];
				v8 = *(_DWORD**)(v7 + 56);
				v9 = *(_DWORD**)(v7 + 64);
				if (v8 != v9)
				{
					do
					{
						if (*v8 == a2)
							break;
						v8 += 3;
					} while (v8 != v9);
					if (v8 != v9)
					{
						if (v8 < v9 - 3)
						{
							v10 = v8 + 3;
							for (i = (12 * (((char*)(v9 - 3) - (char*)v8 - 1) / 0xCui64 + 1)) >> 2; i; --i)
								*v8++ = *v10++;
						}
						*(_QWORD*)(v7 + 64) -= 12i64;
					}
				}
				v5 = (_QWORD*)*v5;
			} while (v5);
			while (1)
			{
				v6 = (unsigned int)(v6 + 1);
				if ((unsigned int)v6 >= 0xC1)
					break;
				v5 = *(_QWORD**)(a1 + 8 * v6 + 56);
				if (v5)
					goto LABEL_8;
			}
		}
		else
		{
			while (1)
			{
				v6 = (unsigned int)(v6 + 1);
				if ((unsigned int)v6 >= 0xC1)
					break;
				v5 = *(_QWORD**)(a1 + 8 * v6 + 56);
				if (v5)
					goto LABEL_8;
			}
		}
		return 1i64;
	}
}
// 1408301DC: conditional instruction was optimized away because r10.8==0
// 14083027B: conditional instruction was optimized away because r10.8==0

