//----- (00000001400E24B0) ----------------------------------------------------
_QWORD* __fastcall sub_1400E24B0(__int64 a1)
{
	unsigned int v1; // esi
	__int64 v3; // rdx
	_QWORD* result; // rax
	unsigned __int64 v5; // rbx
	__int64 v6; // rdi

	v1 = 0;
	if (*(_QWORD*)(a1 + 768))
	{
		v3 = 0i64;
		do
		{
			result = *(_QWORD**)(a1 + 760);
			v5 = 0i64;
			v6 = result[v3];
			if (*(_QWORD*)(v6 + 3208))
			{
				do
					result = sub_140157210(*(_QWORD*)(*(_QWORD*)(v6 + 3200) + 8 * v5++));
				while (v5 < *(_QWORD*)(v6 + 3208));
			}
			v3 = ++v1;
		} while ((unsigned __int64)v1 < *(_QWORD*)(a1 + 768));
	}
	return result;
}

