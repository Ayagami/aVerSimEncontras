
//---------------------------------------------------------------------------
inline float Timer::timeBetweenFrames () const
{	
	return static_cast<float>(m_dTimeBetweenFrames);
}
//---------------------------------------------------------------------------
inline unsigned int Timer::fps () const
{
	return m_uiFPS;
}
//---------------------------------------------------------------------------
inline float Timer::time() const{
	return static_cast<float>(m_dTime);
}