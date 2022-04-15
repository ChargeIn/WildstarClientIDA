//----- (00000001405C83B0) ----------------------------------------------------
void __fastcall sub_1405C83B0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rbx
	__int64 v6; // rax

	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (*(_DWORD*)(a1 + 8) == 7)
	{
		if (v4)
		{
			v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v4 + 192));
			if (v6)
			{
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6))
					v4 = sub_14039DFB0();
			}
		}
	}
	*(_DWORD*)(a3 + 132) = 0;
	*(_DWORD*)(a3 + 128) = 0;
	*(_DWORD*)(a3 + 136) = 0;
	if (a2)
		sub_1405650E0(v4, a2, (float*)(a3 + 132), (_DWORD*)(a3 + 128), (unsigned int*)(a3 + 136));
}
// 140C65898: using guessed type __int64 qword_140C65898;

