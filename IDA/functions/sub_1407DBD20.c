//----- (00000001407DBD20) ----------------------------------------------------
void __fastcall sub_1407DBD20(void (**a1)(void), unsigned __int64 a2)
{
	void (**v3)(void); // rbx

	if ((unsigned __int64)a1 < a2)
	{
		v3 = a1;
		do
		{
			if (*v3)
				(*v3)();
			++v3;
		} while ((unsigned __int64)v3 < a2);
	}
}

