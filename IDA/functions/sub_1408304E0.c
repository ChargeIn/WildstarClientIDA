//----- (00000001408304E0) ----------------------------------------------------
void __fastcall sub_1408304E0(__int64 a1, unsigned __int8 a2)
{
	_QWORD* v2; // r8
	__int64 v3; // r10
	__int64 v5; // rdx
	int v6; // r9d
	int v7; // eax

	v2 = *(_QWORD**)(a1 + 56);
	v3 = a1 + 48;
	LODWORD(a1) = 0;
	if (v2)
	{
		do
		{
		LABEL_6:
			v5 = v2[2];
			v6 = *(_DWORD*)(v5 + 136);
			v7 = (v6 & 0x40000000) != 0 || (*(_BYTE*)(v5 + 18) & a2) != 0;
			*(_DWORD*)(v5 + 136) = v6 ^ (v6 ^ (v7 << 30)) & 0x40000000;
			v2 = (_QWORD*)*v2;
		} while (v2);
		while (1)
		{
			a1 = (unsigned int)(a1 + 1);
			if ((unsigned int)a1 >= 0xC1)
				break;
			v2 = *(_QWORD**)(v3 + 8 * a1 + 8);
			if (v2)
				goto LABEL_6;
		}
	}
	else
	{
		while (1)
		{
			a1 = (unsigned int)(a1 + 1);
			if ((unsigned int)a1 >= 0xC1)
				break;
			v2 = *(_QWORD**)(v3 + 8 * a1 + 8);
			if (v2)
				goto LABEL_6;
		}
	}
}
// 14083050B: conditional instruction was optimized away because r8.8==0
// 140830569: conditional instruction was optimized away because r8.8==0

