//----- (000000014088CC70) ----------------------------------------------------
void __fastcall sub_14088CC70(__int64 a1, char a2)
{
	__int64 v2; // rsi
	__int64 v4; // rsi
	int v5; // ebx

	v2 = *(_QWORD*)(a1 + 24);
	if (v2 && !*(_DWORD*)(a1 + 52))
	{
		v4 = *(_QWORD*)(v2 + 128);
		if (a2)
		{
			v5 = sub_140891630(v4);
			*(_DWORD*)(a1 + 48) = sub_1408922F0(v4) + v5;
		}
		else
		{
			*(_DWORD*)(a1 + 48) = sub_140891630(v4);
		}
	}
}

