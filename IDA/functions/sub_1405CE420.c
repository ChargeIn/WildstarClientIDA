//----- (00000001405CE420) ----------------------------------------------------
void __fastcall sub_1405CE420(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v5; // rdx
	__int64 v6; // rax
	int v7; // edi
	__int64 v8; // rcx

	if (*(_QWORD*)(a1 + 424))
	{
		sub_140195D70(a1 + 408);
		if (*(_DWORD*)(a1 + 72))
		{
			if (*(_DWORD*)(a1 + 76))
			{
				*(_DWORD*)(a1 + 72) = 0;
				sub_1405CF9C0((_DWORD*)a1, v5, a3, a4);
			}
		}
		else
		{
			v6 = sub_140200220(0x231u);
			if (v6)
				v7 = *(_DWORD*)(v6 + 4);
			else
				v7 = 0;
			sub_140195D70(a1 + 480);
			sub_14053B9C0(v8, v7);
		}
	}
}
// 1405CE478: variable 'v8' is possibly undefined
// 1405CE48B: variable 'v5' is possibly undefined

