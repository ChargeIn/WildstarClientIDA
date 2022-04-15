//----- (000000014090789C) ----------------------------------------------------
__int64 __fastcall sub_14090789C(CHAR* a1, CHAR* a2, unsigned __int64 a3, _OWORD* a4)
{
	unsigned int v7; // ebx
	__int64 v8; // rdx
	int v9; // eax
	__int128 v11; // [rsp+40h] [rbp-28h] BYREF
	__int64 v12; // [rsp+50h] [rbp-18h]
	char v13; // [rsp+58h] [rbp-10h]

	sub_1407DE348((__int64)&v11, a4);
	if (a3)
	{
		if (a1 && a2)
		{
			v7 = 0x7FFFFFFF;
			if (a3 <= 0x7FFFFFFF)
			{
				v8 = *(_QWORD*)(v11 + 304);
				if (v8)
				{
					v9 = sub_1407EA8F0(&v11, v8, 0x1001u, a1, a3, a2, a3, *(_DWORD*)(v11 + 8));
					if (v9)
						v7 = v9 - 2;
					else
						*(_DWORD*)sub_1407DE1B0() = 22;
				}
				else
				{
					v7 = sub_1407F8188((unsigned __int8*)a1, (unsigned __int8*)a2, a3, &v11);
				}
			}
			else
			{
				*(_DWORD*)sub_1407DE1B0() = 22;
				sub_1407DC370();
			}
		}
		else
		{
			*(_DWORD*)sub_1407DE1B0() = 22;
			sub_1407DC370();
			v7 = 0x7FFFFFFF;
		}
	}
	else
	{
		v7 = 0;
	}
	if (v13)
		*(_DWORD*)(v12 + 200) &= ~2u;
	return v7;
}

