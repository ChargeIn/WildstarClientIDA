//----- (00000001403AD8F0) ----------------------------------------------------
float __fastcall sub_1403AD8F0(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v7; // r11
	unsigned int* v8; // rax
	__int64 v9; // rax

	if (!a2)
		return 0.0;
	v7 = sub_1403ACD90(a1, a2, a3);
	if (!v7)
		return 0.0;
	if (a3)
	{
		v8 = *(unsigned int**)(a3 + 24);
		if (v8)
		{
			v9 = sub_1407A1680(a1, *v8, a2);
			if (v9)
			{
				if (*(_DWORD*)v9 && *(float*)(v9 + 36) != 0.0)
					return *(float*)(v9 + 36);
			}
		}
	}
	return *(float*)(*(_QWORD*)(v7 + 112) + 112i64);
}
// 1403AD970: variable 'v7' is possibly undefined

