//----- (00000001408C1FE0) ----------------------------------------------------
void __fastcall sub_1408C1FE0(__int64 a1, double a2, double a3, char a4)
{
	__int64 v4; // r10
	__int64 v5; // r11
	int v6; // ecx
	int v7; // r8d
	unsigned int i; // edx
	unsigned int v9; // edi
	__int64 v10; // rbx
	__int64 v11; // r10
	__int64 v12; // rbx
	__int64 v13; // r10

	v4 = 0i64;
	v5 = a1;
	v6 = *(_DWORD*)(a1 + 8);
	v7 = v6;
	for (i = 0; v7; v7 &= v7 - 1)
		++i;
	if (!a4 && (v6 & 8) != 0)
		--i;
	v9 = *(unsigned __int16*)(v5 + 18);
	if (*(float*)&a3 == *(float*)&a2)
	{
		if (i)
		{
			v10 = i;
			do
			{
				sub_1408C1F10((__m128*)(*(_QWORD*)v5 + 4 * v4 * *(unsigned __int16*)(v5 + 16)), a2, v9);
				v4 = v11 + 1;
				--v10;
			} while (v10);
		}
	}
	else if (i)
	{
		v12 = i;
		do
		{
			sub_1408C1DC0((__m128*)(*(_QWORD*)v5 + 4 * v4 * *(unsigned __int16*)(v5 + 16)), *(float*)&a2, a3, v9);
			v4 = v13 + 1;
			--v12;
		} while (v12);
	}
}
// 1408C2045: variable 'v5' is possibly undefined
// 1408C205B: variable 'v11' is possibly undefined
// 1408C208E: variable 'v13' is possibly undefined

