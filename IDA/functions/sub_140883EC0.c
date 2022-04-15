//----- (0000000140883EC0) ----------------------------------------------------
__int64 __fastcall sub_140883EC0(__int64 a1)
{
	__int64 v2; // rax
	_QWORD* v3; // rdx
	__int64 v4; // rcx
	int v5; // ebx
	__int128 v7; // [rsp+20h] [rbp-38h]
	__int128 v8; // [rsp+30h] [rbp-28h]
	__int128 v9; // [rsp+40h] [rbp-18h]

	sub_1408894E0(a1);
	if (*(_QWORD*)(a1 + 288))
	{
		if (*(_BYTE*)(a1 + 248))
		{
			v2 = *(_QWORD*)(a1 + 280);
			v3 = 0i64;
			if (v2)
			{
				while (1)
				{
					v4 = *(_QWORD*)v2;
					if ((*(_DWORD*)(v2 + 20) & 8) != 0)
					{
						*(_QWORD*)&v9 = *(_QWORD*)v2;
						*((_QWORD*)&v9 + 1) = v3;
						if (v2 == *(_QWORD*)(a1 + 280))
							*(_QWORD*)(a1 + 280) = v4;
						else
							*v3 = v4;
						v7 = v9;
					}
					else
					{
						*(_QWORD*)&v8 = *(_QWORD*)v2;
						*((_QWORD*)&v8 + 1) = v3;
						if (v2 == *(_QWORD*)(a1 + 280))
							*(_QWORD*)(a1 + 280) = v4;
						else
							*v3 = v4;
						v7 = v8;
						if (v2)
							sub_140881720(dword_140C111C0, v2);
					}
					v2 = v7;
					if (!(_QWORD)v7)
						break;
					v3 = (_QWORD*)*((_QWORD*)&v7 + 1);
				}
			}
		}
		else
		{
			*(_QWORD*)(a1 + 280) = 0i64;
		}
		sub_140881720(dword_140C111C0, *(_QWORD*)(a1 + 288));
	}
	*(_QWORD*)(a1 + 280) = 0i64;
	sub_140889DC0(a1 + 168);
	v5 = dword_140C111C0;
	(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
	return sub_140881720(v5, a1);
}
// 140C111C0: using guessed type int dword_140C111C0;

