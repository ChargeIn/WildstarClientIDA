//----- (00000001403AF9E0) ----------------------------------------------------
__int64 __fastcall sub_1403AF9E0(__int64 a1, int a2)
{
	unsigned int v2; // eax
	unsigned int v3; // r11d
	__int64* v5; // r10
	__int64 v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rax
	int v9; // edx
	unsigned int v10; // eax
	__int64 v11; // r8
	_DWORD* v12; // rcx

	v2 = *(_DWORD*)(a1 + 4);
	v3 = 0;
	if (v2)
	{
		v5 = *(__int64**)(a1 + 16);
		v6 = v2;
		do
		{
			v7 = *v5;
			if (*v5)
			{
				v8 = *(_QWORD*)(v7 + 72);
				v9 = 0;
				if (!v8)
					v8 = *(_QWORD*)(v7 + 64) + 8i64;
				v10 = *(_DWORD*)(v8 + 304);
				v11 = 8i64;
				if (v10 < 8)
					v11 = v10;
				if ((_DWORD)v11)
				{
					v12 = (_DWORD*)(v7 + 188);
					do
					{
						if (a2 == *v12)
							++v9;
						++v12;
						--v11;
					} while (v11);
				}
				v3 += v9;
			}
			++v5;
			--v6;
		} while (v6);
	}
	return v3;
}

