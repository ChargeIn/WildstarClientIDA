//----- (00000001408455E0) ----------------------------------------------------
void __fastcall sub_1408455E0(__int64 a1, int a2, float a3)
{
	_DWORD* v3; // rax
	_DWORD* v4; // r8
	float* v6; // rdi
	__int64 v7; // rax

	v3 = *(_DWORD**)a1;
	v4 = *(_DWORD**)(a1 + 8);
	if (*(_DWORD**)a1 != v4)
	{
		do
		{
			if (*v3 == a2)
				break;
			v3 += 10;
		} while (v3 != v4);
		if (v3 != v4)
		{
			v6 = (float*)(v3 + 2);
			if (v3 != (_DWORD*)-8i64)
			{
				EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
				v7 = *(_QWORD*)(a1 + 64);
				v6[1] = a3;
				*((_QWORD*)v6 + 2) = v7;
				LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
			}
		}
	}
}

