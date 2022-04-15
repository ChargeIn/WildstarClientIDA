//----- (0000000140069EC0) ----------------------------------------------------
__int64 __fastcall sub_140069EC0(__int64 a1)
{
	__int64 v1; // rax
	int v3; // esi
	unsigned int v4; // eax
	int v5; // edi
	bool v6; // zf
	__int64 v7; // rcx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 56);
	if (++ * (_WORD*)(v1 + 96) > 0xC8u)
		sub_140062CF0(a1, aChunkHasTooMan_0, 0);
	v3 = 134283271;
	do
	{
		v4 = *(_DWORD*)(a1 + 16) - 260;
		if (v4 <= 0x1B && _bittest(&v3, v4))
			break;
		v5 = sub_140069D00(a1);
		if (*(_DWORD*)(a1 + 16) == 59)
		{
			v6 = *(_DWORD*)(a1 + 32) == 287;
			*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
			if (v6)
			{
				*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
			}
			else
			{
				*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
				v7 = *(_QWORD*)(a1 + 40);
				*(_DWORD*)(a1 + 32) = 287;
				*(_QWORD*)(a1 + 24) = v7;
			}
		}
		*(_DWORD*)(*(_QWORD*)(a1 + 48) + 60i64) = *(unsigned __int8*)(*(_QWORD*)(a1 + 48) + 74i64);
	} while (!v5);
	result = *(_QWORD*)(a1 + 56);
	--* (_WORD*)(result + 96);
	return result;
}

