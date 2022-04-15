//----- (00000001406DA6A0) ----------------------------------------------------
void __fastcall sub_1406DA6A0(__int64* a1)
{
	int v2; // r9d
	__int64 v3; // rdx
	unsigned __int64 v4; // r10
	unsigned __int64 v5; // r8
	__int64* v6; // rax
	__int64 v7; // rcx
	unsigned __int64 v8; // r8
	__int64* i; // rax
	__int64 v10; // rcx
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rax

	if (*((char*)a1 + 28) < 0)
	{
		v2 = *((_DWORD*)a1 + 259);
		v3 = 0i64;
		if (v2)
		{
			v4 = *(_QWORD*)(qword_140C65898 + 2712);
			v5 = 0i64;
			if (v4)
			{
				v6 = *(__int64**)(qword_140C65898 + 2704);
				while (1)
				{
					v7 = *v6;
					if (*v6)
					{
						if (*(_DWORD*)(v7 + 64) == v2)
							break;
					}
					++v5;
					++v6;
					if (v5 >= v4)
						goto LABEL_8;
				}
				v11 = *a1;
				v12 = sub_1405A4B80(v7, 1);
				(*(void(__fastcall**)(__int64*, const char*, __int64, __int64))(v11 + 120))(a1, "iM", 4i64, v12);
			}
			else
			{
			LABEL_8:
				v8 = *(_QWORD*)(qword_140C65898 + 2712);
				if (v8)
				{
					for (i = *(__int64**)(qword_140C65898 + 2704); ; ++i)
					{
						v10 = *i;
						if (*i)
						{
							if (*(_DWORD*)(v10 + 64) == v2)
								break;
						}
						if (++v3 >= v8)
							return;
					}
					v13 = sub_1405A4B80(v10, 1);
					if (v13)
						(*(void(__fastcall**)(__int64*, const char*, __int64, __int64))(*a1 + 120))(a1, "iM", 4i64, v13);
				}
			}
		}
	}
}
// 1406DA6FF: conditional instruction was optimized away because r9d.4!=0
// 140C65898: using guessed type __int64 qword_140C65898;

