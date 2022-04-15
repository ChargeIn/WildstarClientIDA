//----- (000000014040C310) ----------------------------------------------------
__int64 __fastcall sub_14040C310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
	__int128* v10; // rbx
	__int64 result; // rax
	__int64 v12; // rax
	int v13; // edx
	_DWORD* v14; // rax
	__int64 v15; // rax
	int v16; // eax
	__int128* v17; // rcx
	__int64 v18; // rax
	__int128 v19; // xmm0

	sub_1407E4830((int*)a2, 0i64, 0x138ui64);
	v10 = (__int128*)(a2 + 148);
	sub_1407E4830((int*)(a2 + 148), 0i64, 0x90ui64);
	*(_QWORD*)(a2 + 148) = 0xC5000000C5i64;
	*(_QWORD*)(a2 + 156) = 0xC5000000C5i64;
	*(_QWORD*)(a2 + 164) = 0xC5000000C5i64;
	*(_QWORD*)(a2 + 172) = 0xC5000000C5i64;
	*(_QWORD*)(a2 + 180) = 0xC5000000C5i64;
	*(_QWORD*)(a2 + 188) = 0xC5000000C5i64;
	*(_QWORD*)(a2 + 196) = 0xC5000000C5i64;
	*(_DWORD*)(a2 + 204) = 197;
	result = sub_14040C610(a1, a2, a3);
	if (!(_DWORD)result)
	{
		if ((v12 = *(_QWORD*)(a1 + 16), !*(_DWORD*)(v12 + 360)) && !*(_DWORD*)(v12 + 364)
			|| (result = sub_14040CA70(a1, a2, a3, a5, a6), !(_DWORD)result))
		{
			v13 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 444i64);
			if (!v13)
				goto LABEL_44;
			v14 = (_DWORD*)sub_14040FA40(a3, v13);
			if (!v14)
				return 149i64;
			if (*(_DWORD*)(a2 + 276) || *(_DWORD*)(a2 + 280))
			{
				result = 149i64;
			}
			else
			{
				*(_DWORD*)(a2 + 280) = v14[3];
				*(_DWORD*)(a2 + 276) = v14[4];
				if (v14[4])
					*(_DWORD*)(a2 + 272) = v14[1];
				result = 0i64;
			}
			if (!(_DWORD)result)
			{
			LABEL_44:
				if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 372i64))
					sub_14040CE50(a1, a2, a3);
				if (*(_QWORD*)(a1 + 256) && *(_DWORD*)(a2 + 12))
				{
					if (*(_DWORD*)(a1 + 192))
					{
						result = sub_14040DBF0(a1, a2);
						if ((_DWORD)result)
							return result;
					}
					else
					{
						result = sub_14040DF10(a1, a2);
						if ((_DWORD)result)
							return result;
						result = sub_14040E340(a1, a2);
						if ((_DWORD)result)
							return result;
						result = sub_14040E3D0(a1, a2);
						if ((_DWORD)result)
							return result;
					}
				}
				v15 = *(_QWORD*)(a1 + 16);
				if (*(_DWORD*)(v15 + 320) == 33)
				{
					result = sub_14040E460((_QWORD*)a1, (_DWORD*)a2);
					if ((_DWORD)result)
						return result;
					v16 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 332i64);
					if ((v16 & 0x800) != 0 && (v16 & 0x8000) != 0)
						return 149i64;
				}
				else if ((*(_DWORD*)(v15 + 332) & 0x800) != 0)
				{
					return 149i64;
				}
				if (a4)
				{
					sub_1407E4830((int*)a4, 0i64, 0x190ui64);
					sub_1407E4830((int*)a4, 0i64, 0x90ui64);
					*(_QWORD*)a4 = 0xC5000000C5i64;
					*(_QWORD*)(a4 + 8) = 0xC5000000C5i64;
					*(_QWORD*)(a4 + 16) = 0xC5000000C5i64;
					*(_QWORD*)(a4 + 24) = 0xC5000000C5i64;
					*(_QWORD*)(a4 + 32) = 0xC5000000C5i64;
					*(_QWORD*)(a4 + 40) = 0xC5000000C5i64;
					*(_QWORD*)(a4 + 48) = 0xC5000000C5i64;
					*(_DWORD*)(a4 + 56) = 197;
					v17 = (__int128*)a4;
					if ((((unsigned __int8)a4 | (unsigned __int8)(a2 - 108)) & 0xF) != 0)
					{
						sub_1407DB590((int*)a4, (int*)(a2 + 148), 0x90ui64);
					}
					else
					{
						v18 = 1i64;
						do
						{
							v19 = *v10;
							v17 += 8;
							v10 += 8;
							*(v17 - 8) = v19;
							*(v17 - 7) = *(v10 - 7);
							*(v17 - 6) = *(v10 - 6);
							*(v17 - 5) = *(v10 - 5);
							*(v17 - 4) = *(v10 - 4);
							*(v17 - 3) = *(v10 - 3);
							*(v17 - 2) = *(v10 - 2);
							*(v17 - 1) = *(v10 - 1);
							--v18;
						} while (v18);
						*v17 = *v10;
					}
				}
				if (*(_QWORD*)(a1 + 160) && *(_QWORD*)(a1 + 104))
				{
					if (*(_DWORD*)(a1 + 96))
						sub_14040CBA0(a1, a2, (_DWORD*)a4, a3);
				}
				return 0i64;
			}
		}
	}
	return result;
}

