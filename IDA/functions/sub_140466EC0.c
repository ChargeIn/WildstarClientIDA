//----- (0000000140466EC0) ----------------------------------------------------
__int64 __fastcall sub_140466EC0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // rdx
	__int64 v6; // rax
	unsigned __int64 v7; // rbx
	int v8; // eax
	bool v9; // cc
	int v10; // eax
	__int64 v11; // rcx
	int v12; // r15d
	unsigned int v13; // r14d
	unsigned int v14; // ebp
	int v15; // ecx
	unsigned __int64 v16; // rcx
	int v17; // edx
	__int64 v18; // rcx
	__int64 v19; // rcx

	sub_1407E4830((int*)a2, 0i64, 0xF0ui64);
	*(_DWORD*)(a2 + 24) = 1065353216;
	if (*(_DWORD*)(a1 + 128) == 18)
	{
		result = (__int64)L"Art\\Icon\\Animation\\Default\\Icon_Animation_Default_000.m3";
		*(_DWORD*)(a2 + 24) = 1065353216;
		*(_QWORD*)a2 = L"Art\\Icon\\Animation\\Default\\Icon_Animation_Default_000.m3";
		*(_QWORD*)(a2 + 12) = 0i64;
	}
	else if (*(_QWORD*)(a1 + 3360))
	{
		*(_DWORD*)(a2 + 24) = 1065353216;
		*(_QWORD*)(a2 + 12) = 0i64;
		result = *(_QWORD*)(a1 + 3360);
		*(_QWORD*)a2 = result;
	}
	else
	{
		v5 = *(_QWORD*)(a1 + 3336);
		if (v5)
		{
			v6 = *(_QWORD*)(a1 + 24);
			if (v6)
				result = sub_1401DAB50(a2, v5, *(float*)(v6 + 104));
			else
				result = sub_1401DAB50(a2, v5, 1.0);
			goto LABEL_28;
		}
		v7 = 0i64;
		*(_DWORD*)(a2 + 12) = *(_DWORD*)(a1 + 216);
		*(_DWORD*)(a2 + 16) = *(_DWORD*)(a1 + 52);
		v8 = *(_DWORD*)(a1 + 220);
		if (v8 == 1 || (v9 = (unsigned int)(v8 - 10) <= 2, v10 = 0, v9))
			v10 = 1;
		*(_DWORD*)(a2 + 20) = v10;
		result = *(_DWORD*)(a1 + 8) & 0xC0000000;
		if ((_DWORD)result == 0x40000000)
		{
			result = qword_140C65898;
			v11 = *(_QWORD*)(qword_140C65898 + 29080);
			if (v11)
			{
				v12 = *(_DWORD*)(v11 + 20);
				if (v12)
				{
					result = sub_1401F2910();
					v13 = result;
					v14 = 0;
					if ((_DWORD)result)
					{
						while (1)
						{
							result = sub_1401F29C0(v14);
							if (*(_DWORD*)(result + 4) == v12 && *(_DWORD*)(result + 8) == *(_DWORD*)(a1 + 216))
								break;
							if (++v14 >= v13)
								goto LABEL_28;
						}
						v15 = *(_DWORD*)(a1 + 52);
						if (v15)
						{
							if (v15 != 1)
								goto LABEL_28;
							v16 = *(_QWORD*)(result + 24);
						}
						else
						{
							v16 = *(_QWORD*)(result + 16);
						}
						if (v16 && v16 <= qword_140C3FE70)
							v7 = v16 + qword_140C3FE68;
						*(_QWORD*)a2 = v7;
					}
				}
			}
		}
	}
LABEL_28:
	if (*(_DWORD*)(a1 + 128) == 7)
	{
		if ((result = qword_140C65898, v17 = *(_DWORD*)(a1 + 688), (v18 = *(_QWORD*)(qword_140C65898 + 120)) != 0)
			&& *(_DWORD*)(v18 + 8) == v17
			|| (result = qword_140C65898, (v19 = *(_QWORD*)(qword_140C65898 + 25744)) != 0) && *(_DWORD*)(v19 + 8) == v17)
		{
			*(_DWORD*)(a2 + 168) = 1;
		}
	}
	return result;
}
// 140B07D90: using guessed type wchar_t aArtIconAnimati[57];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;

