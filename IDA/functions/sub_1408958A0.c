//----- (00000001408958A0) ----------------------------------------------------
__int64 __fastcall sub_1408958A0(__int64 a1, __int64 a2, unsigned int** a3, __int64 a4)
{
	__int64 v4; // r11
	unsigned int* v7; // r9
	unsigned __int64 v8; // rcx
	unsigned int v9; // ebx
	unsigned int* v10; // r8
	unsigned int* v11; // r10
	__int64 v12; // kr00_8
	unsigned int* v13; // rdx

	v4 = a4;
	if (a4)
	{
		while (v4 != a2)
		{
			v7 = *a3;
			v8 = (unsigned __int64)a3[1];
			v9 = *(_DWORD*)(v4 + 24);
			v10 = (unsigned int*)v8;
			if (*a3)
			{
				v11 = a3[1];
				if ((unsigned __int64)v7 <= v8)
				{
					do
					{
						v12 = v11 - v7;
						v13 = &v7[v12 / 2];
						if (v9 >= *v13)
						{
							if (v9 <= *v13)
							{
								v10 = &v7[v12 / 2];
								break;
							}
							v7 = v13 + 1;
						}
						else
						{
							v11 = v13 - 1;
						}
					} while (v7 <= v11);
				}
			}
			if (v10 != (unsigned int*)v8)
				return v4;
			v4 = *(_QWORD*)(v4 + 64);
			if (!v4)
				return 0i64;
		}
	}
	return 0i64;
}

