//----- (00000001409070F8) ----------------------------------------------------
__int64 __fastcall sub_1409070F8(CHAR* a1, CHAR* a2, unsigned __int64 a3, _OWORD* a4)
{
	unsigned int v8; // ebx
	int v9; // eax
	__int128 v11; // [rsp+40h] [rbp-28h] BYREF
	__int64 v12; // [rsp+50h] [rbp-18h]
	char v13; // [rsp+58h] [rbp-10h]

	sub_1407DE348((__int64)&v11, a4);
	if (a3)
	{
		if (a1 && a2)
		{
			v8 = 0x7FFFFFFF;
			if (a3 <= 0x7FFFFFFF)
			{
				if (*(_DWORD*)(*((_QWORD*)&v11 + 1) + 8i64))
				{
					v9 = sub_1407EA8F0(
						&v11,
						*(_QWORD*)(*((_QWORD*)&v11 + 1) + 544i64),
						0x1001u,
						a1,
						a3,
						a2,
						a3,
						*(_DWORD*)(*((_QWORD*)&v11 + 1) + 4i64));
					if (v9)
						v8 = v9 - 2;
				}
				else
				{
					v8 = sub_14090789C(a1, a2, a3, a4);
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
			v8 = 0x7FFFFFFF;
		}
	}
	else
	{
		v8 = 0;
	}
	if (v13)
		*(_DWORD*)(v12 + 200) &= ~2u;
	return v8;
}

