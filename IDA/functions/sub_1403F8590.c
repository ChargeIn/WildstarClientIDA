//----- (00000001403F8590) ----------------------------------------------------
void __fastcall sub_1403F8590(_QWORD* a1, int* a2, __int64* a3)
{
	unsigned int v3; // r9d
	__int64 v5; // r10
	__int64* v6; // rax
	int* v7; // rax
	__int64 v8; // rcx

	if (a2)
	{
		v3 = *(_DWORD*)a3;
		if (*(_DWORD*)a3)
		{
			v5 = a3[1];
			if (v5)
			{
				v6 = *(__int64**)(a1[3325]
					+ 8
					* ((a3[1] & 0xFFFFFF | ((unsigned __int64)v3 << 48)) % ((__int64)(a1[3326] - a1[3325]) >> 3)));
				if (v6)
				{
					while (*((_DWORD*)v6 + 2) != v3 || v6[2] != v5)
					{
						v6 = (__int64*)*v6;
						if (!v6)
							goto LABEL_10;
					}
				}
				else
				{
				LABEL_10:
					v7 = sub_1403FAD00(a1 + 3323, a3);
					v8 = 0i64;
					if (*(_WORD*)a2)
					{
						do
							++v8;
						while (*((_WORD*)a2 + v8));
					}
					sub_14001C480((__int64)v7, a2, (int*)((char*)a2 + 2 * v8));
				}
			}
		}
	}
}
// 1403F8619: conditional instruction was optimized away because rax.8!=0

