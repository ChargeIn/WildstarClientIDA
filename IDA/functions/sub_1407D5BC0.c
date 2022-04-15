//----- (00000001407D5BC0) ----------------------------------------------------
void __fastcall sub_1407D5BC0(_QWORD* a1)
{
	unsigned int v1; // ebx
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rax
	unsigned int v6; // r10d
	_QWORD* v7; // r9
	__int64 v8; // rdx

	v1 = 0;
	if (a1[60])
	{
		v3 = a1[59];
		v4 = 0i64;
		do
		{
			v5 = 2 * v4;
			v6 = 0;
			v7 = (_QWORD*)(v3 + 8 * v5);
			if (v7[1])
			{
				v8 = 0i64;
				do
				{
					++v6;
					*(_DWORD*)(*v7 + 12 * v8 + 8) = *(_DWORD*)(a1[3] + 1320i64);
					v3 = a1[59];
					v8 = v6;
					v7 = (_QWORD*)(v3 + 8 * v5);
				} while ((unsigned __int64)v6 < v7[1]);
			}
			v4 = ++v1;
		} while ((unsigned __int64)v1 < a1[60]);
	}
}

