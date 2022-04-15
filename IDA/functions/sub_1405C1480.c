//----- (00000001405C1480) ----------------------------------------------------
void __fastcall sub_1405C1480(_DWORD* a1)
{
	unsigned int v1; // eax
	int v2; // edx
	unsigned int v3; // r8d
	int v4; // edx
	int v5; // eax
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	if (!a1[16])
	{
		v1 = a1[1];
		if (v1 <= 8)
		{
			v2 = 278;
			if (_bittest(&v2, v1))
			{
				v3 = a1[10];
				if (v3 && (v4 = a1[9], dword_140C636A8 - v4 < v3))
				{
					v6 = 0i64;
					v5 = a1[8];
					HIDWORD(v6) = v3 + v4 - dword_140C636A8;
					LODWORD(v6) = v5;
					sub_1405C1FC0(a1, (int*)&v6);
				}
				else
				{
					LOBYTE(v6) = 0;
					sub_1403F4900(qword_140C65898, 0x5D3u, (__int64)&v6);
				}
			}
		}
	}
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

