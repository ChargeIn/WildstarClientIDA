//----- (0000000140888E20) ----------------------------------------------------
void __fastcall sub_140888E20(__int64* a1)
{
	__int64 v1; // rdx
	__int64* v3; // rax
	__int64* v4; // rcx
	__int64* v5; // r8
	__int64* v6; // rax
	bool v7; // zf
	__int64 v8; // rcx

	v1 = a1[23];
	if (v1 && (*(_BYTE*)(v1 + 20) & 7) != 0)
	{
		do
		{
			if ((*(_DWORD*)(v1 + 20) & 7) == 2)
			{
				v4 = (__int64*)a1[25];
				v5 = 0i64;
				v6 = v4;
				if (v4)
				{
					while (v6 != (__int64*)v1)
					{
						v5 = v6;
						v6 = (__int64*)*v6;
						if (!v6)
							goto LABEL_15;
					}
					v7 = v6 == v4;
					v8 = *v6;
					if (v7)
						a1[25] = v8;
					else
						*v5 = v8;
				}
			}
			else
			{
				v3 = (__int64*)a1[23];
				if (v3)
				{
					if (*v3)
					{
						a1[23] = *v3;
					}
					else
					{
						a1[23] = 0i64;
						a1[24] = 0i64;
					}
				}
			}
		LABEL_15:
			sub_140883BA0((__int64)a1, v1, 1);
			sub_1408890E0(a1[12]);
			v1 = sub_1408884D0((__int64)a1);
		} while (v1);
	}
}

