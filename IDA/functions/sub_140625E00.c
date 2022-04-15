//----- (0000000140625E00) ----------------------------------------------------
__int64 __fastcall sub_140625E00(__int64 a1)
{
	unsigned __int64 v1; // rsi
	int v2; // edi
	float v4; // xmm6_4
	unsigned __int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rcx
	float v8; // xmm0_4
	__int64 v9; // rax

	v1 = *(_QWORD*)(a1 + 24);
	v2 = 0;
	v4 = 0.0;
	v5 = 0i64;
	if (!v1)
		return 0i64;
	do
	{
		v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * v5));
		v7 = *(_QWORD*)(v6 + 256);
		if (v7)
		{
			v8 = *(float*)(v7 + 12);
		}
		else
		{
			v9 = *(_QWORD*)(v6 + 24);
			if (v9)
				v8 = *(float*)(v9 + 48);
			else
				v8 = 0.0;
		}
		++v5;
		v4 = v4 + v8;
	} while (v5 < v1);
	if (v4 <= 0.60000002)
		return 0i64;
	if (v4 <= 1.3)
		return 1i64;
	if (v4 <= 1.75)
		return 2i64;
	if (v4 <= 2.5)
		return 3i64;
	if (v4 <= 10.0)
		return 4i64;
	if (v4 <= 20.0)
		return 5i64;
	LOBYTE(v2) = v4 > 40.0;
	return (unsigned int)(v2 + 6);
}
// 140C65898: using guessed type __int64 qword_140C65898;

