//----- (000000014031BC40) ----------------------------------------------------
__int64 __fastcall sub_14031BC40(__int64 a1)
{
	unsigned int* v1; // rdx
	unsigned int v2; // ebx
	__int64 v3; // r8
	__int64 v4; // rcx

	v1 = *(unsigned int**)(a1 + 416);
	v2 = 0;
	v3 = v1[68];
	if (v1[68])
	{
		v1 = (unsigned int*)*((_QWORD*)v1 + 36);
		do
		{
			if (v2 <= *v1)
				v2 = *v1;
			++v1;
			--v3;
		} while (v3);
	}
	v4 = *(_QWORD*)(a1 + 1080);
	if (v4)
		return v2 + (*(unsigned int(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v4 + 1152i64))(v4, v1);
	else
		return v2;
}

